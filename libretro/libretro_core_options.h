#ifndef LIBRETRO_CORE_OPTIONS_H__
#define LIBRETRO_CORE_OPTIONS_H__

#include <stdlib.h>
#include <string.h>

#include <libretro.h>
#include <retro_inline.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/

/* RETRO_LANGUAGE_ENGLISH */

/* Default language:
 * - All other languages must include the same keys and values
 * - Will be used as a fallback in the event that frontend language
 *   is not available
 * - Will be used as a fallback for any missing entries in
 *   frontend language definition */

struct retro_core_option_definition option_defs_us[] = {
   {
      "pokemini_video_scale",
      "Video Scale (Restart)",
      "Set internal video scale factor. Increasing the scale factor improves the appearance of the internal 'Dot Matrix' LCD filter.",
      {
#ifdef _3DS
         { "1x", NULL },
         { "2x", NULL },
         { "3x", NULL },
#else
         { "4x", NULL },
         { "5x", NULL },
         { "6x", NULL },
         { "1x", NULL },
         { "2x", NULL },
         { "3x", NULL },
#endif
         { NULL, NULL },
      }
   },
   {
      "pokemini_lcdfilter",
      "LCD Filter",
      "Select internal screen filter. 'Dot Matrix' produces an LCD effect that mimics real hardware. LCD filters are disabled when 'Video Scale' is set to '1x'.",
      {
         { "dotmatrix", "Dot Matrix" },
         { "scanline",  "Scanlines" },
         { "none",      "None" },
         { NULL, NULL },
      }
   },
   {
      "pokemini_lcdmode",
      "LCD Mode",
      "Specify the greyscale 'color' reproduction characteristics of the emulated liquid crystal display. 'Analog' mimics real hardware. '2 Shades' removes ghosting, but causes flickering in most games.",
      {
         { "analog",  "Analog" },
         { "3shades", "3 Shades" },
         { "2shades", "2 Shades" },
         { NULL, NULL },
      }
   },
   {
      "pokemini_lcdcontrast",
      "LCD Contrast",
      "Set contrast level of emulated liquid crystal display.",
      {
         { "64", NULL },
         { "0",  NULL },
         { "16", NULL },
         { "32", NULL },
         { "48", NULL },
         { "80", NULL },
         { "96", NULL },
         { NULL, NULL },
      }
   },
   {
      "pokemini_lcdbright",
      "LCD Brightness",
      "Set brightness offset of emulated liquid crystal display.",
      {
         { "0",   NULL },
         { "-80", NULL },
         { "-60", NULL },
         { "-40", NULL },
         { "-20", NULL },
         { "20",  NULL },
         { "40",  NULL },
         { "60",  NULL },
         { "80",  NULL },
         { NULL, NULL },
      }
   },
   {
      "pokemini_palette",
      "Palette",
      "Specify palette used to 'colorize' the emulated liquid crystal display. 'Default' mimics real hardware.",
      {
         { "Default",           "Default" },
         { "Old",               "Old" },
         { "Monochrome",        "Black & White" },
         { "Green",             "Green" },
         { "Green Vector",      "Inverted Green" },
         { "Red",               "Red" },
         { "Red Vector",        "Inverted Red" },
         { "Blue LCD",          "Blue LCD" },
         { "LEDBacklight",      "LED Backlight" },
         { "Girl Power",        "Girl Power" },
         { "Blue",              "Blue" },
         { "Blue Vector",       "Inverted Blue" },
         { "Sepia",             "Sepia" },
         { "Monochrome Vector", "Inverted Black & White" },
         { NULL, NULL },
      }
   },
   {
      "pokemini_piezofilter",
      "Piezo Filter",
      "Use an audio filter to simulate the characteristics of the Pokemon Mini's piezoelectric speaker.",
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      }
   },
   {
      "pokemini_rumblelvl",
      "Rumble Level (Screen + Controller)",
      "Specify the magnitude of the force feedback effect, both virtual and physical.",
      {
         { "3", NULL },
         { "2", NULL },
         { "1", NULL },
         { "0", NULL },
         { NULL, NULL },
      }
   },
   {
      "pokemini_controller_rumble",
      "Controller Rumble",
      "Enable physical force feedback effect via controller rumble.",
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      }
   },
   {
      "pokemini_screen_shake",
      "Screen Shake",
      "Enable virtual force feedback effect by 'shaking' the screen.",
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      }
   },
   { NULL, NULL, NULL, {{0}} },
};

/* RETRO_LANGUAGE_JAPANESE */

/* RETRO_LANGUAGE_FRENCH */

struct retro_core_option_definition option_defs_fr[] = {
   {
      "pokemini_video_scale",
      "Échelle vidéo (redémarrer)",
      "Définir le facteur d'échelle vidéo interne. L'augmentation du facteur d'échelle améliore l'apparence du filtre LCD interne «Matrice de Points».",
      {
         { NULL, NULL }, /* Scale factors do not require translation */
      }
   },
   {
      "pokemini_lcdfilter",
      "Filtre LCD",
      "Sélectionnez le filtre d'écran interne. «Matrice de Points» produit un effet LCD qui imite le matériel réel. Les filtres LCD sont désactivés lorsque «Échelle vidéo» est défini sur «1x».",
      {
         { "dotmatrix", "Matrice de Points" },
         { "scanline",  "Lignes de Balayage" },
         { "none",      "Aucun" },
         { NULL, NULL },
      }
   },
   {
      "pokemini_lcdmode",
      "Mode LCD",
      "Spécifiez les caractéristiques de reproduction 'couleur' ​​en niveaux de gris de l'affichage à cristaux liquides émulé. «Analogique» imite le matériel réel. «2 Nuances» supprime les images fantômes, mais provoque un scintillement dans la plupart des jeux.",
      {
         { "analog",  "Analogique" },
         { "3shades", "3 Nuances" },
         { "2shades", "2 Nuances" },
         { NULL, NULL },
      }
   },
   {
      "pokemini_lcdcontrast",
      "Contraste LCD",
      "Réglez le niveau de contraste de l’écran à cristaux liquides émulé.",
      {
         { NULL, NULL }, /* Numbers do not require translation */
      }
   },
   {
      "pokemini_lcdbright",
      "Luminosité de l'écran LCD",
      "Définissez le décalage de luminosité de l’affichage à cristaux liquides émulé.",
      {
         { NULL, NULL }, /* Numbers do not require translation */
      }
   },
   {
      "pokemini_palette",
      "Palette",
      "Spécifiez la palette utilisée pour 'coloriser' l'affichage à cristaux liquides émulé. «Défaut» imite le matériel réel.",
      {
         { "Default",           "Défaut" },
         { "Old",               "Vieux" },
         { "Monochrome",        "Noir et Blanc" },
         { "Green",             "Vert" },
         { "Green Vector",      "Vert Inversé" },
         { "Red",               "Rouge" },
         { "Red Vector",        "Rouge Inversé" },
         { "Blue LCD",          "LCD Bleu" },
         { "LEDBacklight",      "Rétro-éclairage LED" },
         { "Girl Power",        "Pouvoir des Filles" },
         { "Blue",              "Bleu" },
         { "Blue Vector",       "Bleu Inversé" },
         { "Sepia",             "Sépia" },
         { "Monochrome Vector", "Noir et Blanc Inversé" },
         { NULL, NULL },
      }
   },
   {
      "pokemini_piezofilter",
      "Filtre Piézo",
      "Utilisez un filtre audio pour simuler les caractéristiques du haut-parleur piézoélectrique du Pokemon Mini.",
      {
         { NULL, NULL }, /* enabled/disabled strings do not require translation */
      }
   },
   {
      "pokemini_rumblelvl",
      "Niveau de Rumble (écran + contrôleur)",
      "Spécifiez l'ampleur de l'effet de retour de force, à la fois virtuel et physique.",
      {
         { NULL, NULL }, /* Numbers do not require translation */
      }
   },
   {
      "pokemini_controller_rumble",
      "Contrôleur Rumble",
      "Activer l'effet de retour de force physique via le roulement du contrôleur.",
      {
         { NULL, NULL }, /* enabled/disabled strings do not require translation */
      }
   },
   {
      "pokemini_screen_shake",
      "Secousse de l'écran",
      "Activez l'effet de retour de force virtuel en 'secouant' l'écran.",
      {
         { NULL, NULL }, /* enabled/disabled strings do not require translation */
      }
   },
   { NULL, NULL, NULL, {{0}} },
};

/* RETRO_LANGUAGE_SPANISH */

/* RETRO_LANGUAGE_GERMAN */

/* RETRO_LANGUAGE_ITALIAN */

/* RETRO_LANGUAGE_DUTCH */

/* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */

/* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */

/* RETRO_LANGUAGE_RUSSIAN */

/* RETRO_LANGUAGE_KOREAN */

/* RETRO_LANGUAGE_CHINESE_TRADITIONAL */

/* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */

/* RETRO_LANGUAGE_ESPERANTO */

/* RETRO_LANGUAGE_POLISH */

/* RETRO_LANGUAGE_VIETNAMESE */

/* RETRO_LANGUAGE_ARABIC */

/* RETRO_LANGUAGE_GREEK */

/* RETRO_LANGUAGE_TURKISH */

/*
 ********************************
 * Language Mapping
 ********************************
*/

struct retro_core_option_definition *option_defs_intl[RETRO_LANGUAGE_LAST] = {
   option_defs_us, /* RETRO_LANGUAGE_ENGLISH */
   NULL,           /* RETRO_LANGUAGE_JAPANESE */
   option_defs_fr, /* RETRO_LANGUAGE_FRENCH */
   NULL,           /* RETRO_LANGUAGE_SPANISH */
   NULL,           /* RETRO_LANGUAGE_GERMAN */
   NULL,           /* RETRO_LANGUAGE_ITALIAN */
   NULL,           /* RETRO_LANGUAGE_DUTCH */
   NULL,           /* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */
   NULL,           /* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */
   NULL,           /* RETRO_LANGUAGE_RUSSIAN */
   NULL,           /* RETRO_LANGUAGE_KOREAN */
   NULL,           /* RETRO_LANGUAGE_CHINESE_TRADITIONAL */
   NULL,           /* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */
   NULL,           /* RETRO_LANGUAGE_ESPERANTO */
   NULL,           /* RETRO_LANGUAGE_POLISH */
   NULL,           /* RETRO_LANGUAGE_VIETNAMESE */
   NULL,           /* RETRO_LANGUAGE_ARABIC */
   NULL,           /* RETRO_LANGUAGE_GREEK */
   NULL,           /* RETRO_LANGUAGE_TURKISH */
};

/*
 ********************************
 * Functions
 ********************************
*/

/* Handles configuration/setting of core options.
 * Should only be called inside retro_set_environment().
 * > We place the function body in the header to avoid the
 *   necessity of adding more .c files (i.e. want this to
 *   be as painless as possible for core devs)
 */

static INLINE void libretro_set_core_options(retro_environment_t environ_cb)
{
   unsigned version = 0;

   if (!environ_cb)
      return;

   if (environ_cb(RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION, &version) && (version == 1))
   {
      struct retro_core_options_intl core_options_intl;
      unsigned language = 0;

      core_options_intl.us    = option_defs_us;
      core_options_intl.local = NULL;

      if (environ_cb(RETRO_ENVIRONMENT_GET_LANGUAGE, &language) &&
          (language < RETRO_LANGUAGE_LAST) && (language != RETRO_LANGUAGE_ENGLISH))
         core_options_intl.local = option_defs_intl[language];

      environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_INTL, &core_options_intl);
   }
   else
   {
      size_t i;
      size_t num_options               = 0;
      struct retro_variable *variables = NULL;
      char **values_buf                = NULL;

      /* Determine number of options */
      while (true)
      {
         if (option_defs_us[num_options].key)
            num_options++;
         else
            break;
      }

      /* Allocate arrays */
      variables  = (struct retro_variable *)calloc(num_options + 1, sizeof(struct retro_variable));
      values_buf = (char **)calloc(num_options, sizeof(char *));

      if (!variables || !values_buf)
         goto error;

      /* Copy parameters from option_defs_us array */
      for (i = 0; i < num_options; i++)
      {
         const char *key                        = option_defs_us[i].key;
         const char *desc                       = option_defs_us[i].desc;
         struct retro_core_option_value *values = option_defs_us[i].values;
         size_t buf_len                         = 3;

         values_buf[i] = NULL;

         if (desc)
         {
            size_t num_values = 0;

            /* Determine number of values */
            while (true)
            {
               if (values[num_values].value)
               {
                  buf_len += strlen(values[num_values].value);
                  num_values++;
               }
               else
                  break;
            }

            /* Build values string */
            if (num_values > 1)
            {
               size_t j;

               buf_len += num_values - 1;
               buf_len += strlen(desc);

               values_buf[i] = (char *)calloc(buf_len, sizeof(char));
               if (!values_buf[i])
                  goto error;

               strcpy(values_buf[i], desc);
               strcat(values_buf[i], "; ");

               for (j = 0; j < num_values; j++)
               {
                  strcat(values_buf[i], values[j].value);
                  if (j != num_values - 1)
                     strcat(values_buf[i], "|");
               }
            }
         }

         variables[i].key   = key;
         variables[i].value = values_buf[i];
      }
      
      /* Set variables */
      environ_cb(RETRO_ENVIRONMENT_SET_VARIABLES, variables);

error:

      /* Clean up */
      if (values_buf)
      {
         for (i = 0; i < num_options; i++)
         {
            if (values_buf[i])
            {
               free(values_buf[i]);
               values_buf[i] = NULL;
            }
         }

         free(values_buf);
         values_buf = NULL;
      }

      if (variables)
      {
         free(variables);
         variables = NULL;
      }
   }
}

#ifdef __cplusplus
}
#endif

#endif
