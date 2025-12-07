#include <zmk/display.h>
#include <lvgl.h>

LV_IMG_DECLARE(arc);

static int arc_display_init(const struct device *dev)
{
    lv_obj_t *screen = zmk_display_get_framebuffer();

    lv_obj_t *img = lv_img_create(screen);
    lv_img_set_src(img, &arc_logo);
    lv_obj_align(img, LV_ALIGN_CENTER, 0, 0);

    return 0;
}

SYS_INIT(arc_display_init, APPLICATION, CONFIG_ZMK_DISPLAY_INIT_PRIORITY);
