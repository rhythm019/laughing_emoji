
#include "splashkit.h"

/// A Test application to demonstrate the use of Animations in SplashKit.
int main()
{
    window w = open_window("Animation Test", 800, 600);

    load_sound_effect("laugh", "laughing.wav");

    play_sound_effect("laugh");

    bitmap laugh = load_bitmap("laugh", "laugh.jpg");
    bitmap_set_cell_details(laugh, 384, 335, 5, 5, 25); // cell width, height, cols, rows, count
    animation_script laughscript = load_animation_script("makescript", "script.txt");
    animation test = create_animation(laughscript, "laugh1");
    drawing_options opt;
    opt = option_with_animation(test);
    while (not quit_requested())
    {

        // Draw the bitmap - using opt to link to animation
        process_events();
        clear_screen(COLOR_WHITE);
        draw_bitmap(laugh, 230, 100, opt);
        refresh_screen(20);

        // Update the animation
        update_animation(test);
    }
    
}

// class laughing
//{

// static void main()
//{
// laughing bitmap = SplashKit.Loaditmap("laugh", laugh.jpg);
// laugh.SetCellDetails(338, 335, 5, 5, 25);
// laughscript.txt AnimationScript = SplashKit.LoadAnimationScript("laughscript", laughscript.txt);
// laugh25 Animation = laughscript.CreateAnimation("laugh1");
// laughing DrawingOptions;
// laughing = SplashKit.OptionWithAnimation(laugh25);

// Window = new Window("laugh window", 750, 750);

// while (!(_Window.CloseRequested))
//{//
// SplashKit.ProcessEvents();
//_Window.Clear(color.Gray);
//_Window.DrawBitmap(laugh, (_Window.Width / 2 - (270 / 2)), (_Window.Height / 2 - (270 / 2)), laughs);
//_Window.Refresh();
// laugh25.Update();
