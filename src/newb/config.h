#ifndef NL_CONFIG_H
#define NL_CONFIG_H

/*
  NEWB SHADER MAIN CONFIG - MAX REALISTIC SETTINGS
  Customized for Samsung Galaxy A51
  Focus: Daytime realism, sharp shadows, water reflections
*/

/* Color correction */
#define NL_TONEMAP_TYPE 4              // ACES - most cinematic/realistic
#define NL_GAMMA 1.15                  // slightly lower = more contrast
#define NL_EXPOSURE 1.2                // [toggle] slightly brighter overall
#define NL_SATURATION 1.35             // [toggle] vibrant but not overdone
#define NL_TINT                        // [toggle] enable warm/cool tinting
#define NL_TINT_LOW  vec3(0.4,0.55,1.5) // cool blue shadows
#define NL_TINT_HIGH vec3(1.5,0.85,0.4) // warm golden highlights

/* Lighting */
#define NL_SUNLIGHT_INTENSITY   4.5    // strong warm sunlight
#define NL_TORCHLIGHT_INTENSITY 1.8    // warmer torches
#define NL_SHADOW_INTENSITY     0.92   // sharp deep shadows
#define NL_MIN_LIGHTING_BOOST   1.2    // darker dark areas = more contrast
#define NL_BLINKING_TORCH              // [toggle] flickering torch
#define NL_CLOUD_SHADOW                // [toggle] cloud shadows on ground

/* Ambient light for nether/end */
#define NL_NETHER_AMBIENT vec3(3.0,2.16,1.89)
#define NL_END_AMBIENT    vec3(1.98,1.25,2.3)

/* Sun/moon light color - warm realistic */
#define NL_DAWN_SUNLIGHT_COL   vec3(1.0,0.35,0.05)  // deep orange dawn
#define NL_NOON_SUNLIGHT_COL   vec3(1.0,0.88,0.65)  // warm golden noon
#define NL_NIGHT_MOONLIGHT_COL vec3(0.01,0.03,0.22) // cold blue moonlight

/* Torch colors - warm fire */
#define NL_OVERWORLD_TORCH_COL  vec3(1.0,0.48,0.12)
#define NL_UNDERWATER_TORCH_COL vec3(1.0,0.48,0.12)
#define NL_NETHER_TORCH_COL     vec3(1.0,0.48,0.12)
#define NL_END_TORCH_COL        vec3(1.0,0.48,0.12)

/* Fog */
#define NL_FOG 1.0                // full sky blend
#define NL_MIST_DENSITY 0.22      // slightly more atmospheric mist
#define NL_RAIN_MIST_OPACITY 0.18 // visible rain mist
#define NL_CLOUDY_FOG 0.15        // subtle fog during clouds

/* Sky */
#define NL_SKY_VOID_FACTOR     0.6
#define NL_SKY_VOID_DARKNESS   0.4
#define NL_SKY_RAIN_MIX_FACTOR 0.9

/* Sky colors - more vivid realistic */
#define NL_DAWN_ZENITH_COL   vec3(0.08,0.35,0.72)   // deep blue dawn sky
#define NL_DAWN_HORIZON_COL  vec3(3.2,0.38,0.2)     // intense orange horizon
#define NL_DAWN_EDGE_COL     vec3(2.2,0.9,0.5)      // warm pink edge
#define NL_DAY_ZENITH_COL    vec3(0.18,0.72,2.0)    // vivid blue sky
#define NL_DAY_HORIZON_COL   vec3(0.85,1.55,1.9)    // bright horizon
#define NL_DAY_EDGE_COL      vec3(1.5,1.62,1.68)    // bright edge
#define NL_NIGHT_ZENITH_COL  vec3(0.005,0.03,0.07)  // very dark night
#define NL_NIGHT_HORIZON_COL vec3(0.015,0.05,0.09)
#define NL_NIGHT_EDGE_COL    vec3(0.03,0.07,0.1)
#define NL_RAIN_ZENITH_COL   vec3(0.42,0.46,0.52)   // darker rain sky
#define NL_RAIN_HORIZON_COL  vec3(0.55,0.55,0.58)

#define NL_END_ZENITH_COL    vec3(0.08,0.001,0.1)
#define NL_END_HORIZON_COL   vec3(0.6,0.02,0.6)

/* Rainbow */
#define NL_RAINBOW
#define NL_RAINBOW_CLEAR 0.0
#define NL_RAINBOW_RAIN  0.5        // more visible rainbow in rain

/* Ore glow */
#define NL_GLOW_TEX 2.8            // brighter ore glow
#define NL_GLOW_SHIMMER 0.9        // strong shimmer
#define NL_GLOW_SHIMMER_SPEED 0.9
#define NL_GLOW_LEAK 0.5           // [toggle] glow leaks light

/* Waving */
#define NL_PLANTS_WAVE 0.06        // gentle natural wave
#define NL_LANTERN_WAVE 0.18       // lantern swing
#define NL_WAVE_SPEED 2.5
#define NL_WAVE_RANGE 16.0         // larger wave range

/* Water - MAX REFLECTIONS */
#define NL_WATER_TRANSPARENCY 0.85  // slightly more transparent
#define NL_WATER_BUMP 0.14          // more bumpy waves
#define NL_WATER_WAVE_SPEED  0.9    // slightly faster waves
#define NL_WATER_TEX_OPACITY 0.18   // less vanilla texture = more reflective
#define NL_WATER_WAVE                // wave effect ON
#define NL_WATER_REFL_MASK          // [toggle] reflection mask ON
#define NL_WATER_TINT vec3(0.38,0.75,0.95)  // deeper blue water

/* Underwater */
#define NL_UNDERWATER_BRIGHTNESS 0.9
#define NL_CAUSTIC_INTENSITY 2.4             // brighter caustics
#define NL_UNDERWATER_WAVE 0.12
#define NL_UNDERWATER_STREAKS 1.3            // brighter light streaks
#define NL_UNDERWATER_TINT vec3(0.7,0.92,1.0) // blue underwater tint

/* Cloud type - REALISTIC */
#define NL_CLOUD_TYPE 3            // 3 = realistic clouds

/* Vanilla cloud settings */
#define NL_CLOUD0_THICKNESS 2.1
#define NL_CLOUD0_RAIN_THICKNESS 4.0
#define NL_CLOUD0_OPACITY 0.9
#define NL_CLOUD0_MULTILAYER

/* Soft cloud settings */
#define NL_CLOUD1_SCALE vec2(0.016, 0.022)
#define NL_CLOUD1_DEPTH 1.5                // more cloud depth
#define NL_CLOUD1_SPEED 0.04
#define NL_CLOUD1_DENSITY 0.58             // slightly more clouds
#define NL_CLOUD1_OPACITY 0.95

/* Rounded cloud settings */
#define NL_CLOUD2_THICKNESS 2.2
#define NL_CLOUD2_RAIN_THICKNESS 2.8
#define NL_CLOUD2_STEPS 8                  // higher quality
#define NL_CLOUD2_SCALE vec2(0.033, 0.033)
#define NL_CLOUD2_SHAPE vec2(0.5, 0.4)
#define NL_CLOUD2_DENSITY 28.0
#define NL_CLOUD2_VELOCITY 0.8
#define NL_CLOUD2_LAYER2_OFFSET 143.0
#define NL_CLOUD2_LAYER2_THICKNESS 2.5
#define NL_CLOUD2_LAYER2_RAIN_THICKNESS 3.0
#define NL_CLOUD2_LAYER2_STEPS 4
#define NL_CLOUD2_LAYER2_SCALE vec2(0.03, 0.03)
#define NL_CLOUD2_LAYER2_SHAPE vec2(0.5, 0.4)
#define NL_CLOUD2_LAYER2_DENSITY 25.0
#define NL_CLOUD2_LAYER2_VELOCITY 0.8

/* Realistic cloud settings */
#define NL_CLOUD3_SCALE vec2(0.025, 0.025) // slightly larger clouds
#define NL_CLOUD3_SPEED 0.006
#define NL_CLOUD3_SHADOW 0.95              // darker cloud shadows
#define NL_CLOUD3_SHADOW_OFFSET 0.35

/* Aurora settings */
#define NL_AURORA 1.5                      // brighter aurora
#define NL_AURORA_VELOCITY 0.03
#define NL_AURORA_SCALE 0.04
#define NL_AURORA_WIDTH 0.20
#define NL_AURORA_COL1 vec3(0.1,1.0,0.0)
#define NL_AURORA_COL2 vec3(0.1,0.0,1.0)

#define NL_CLOUD_AURORA_REFLECTION         // aurora reflects in water

/* Shooting star */
#define NL_SHOOTING_STAR 1.0
#define NL_SHOOTING_STAR_PERIOD 6.0
#define NL_SHOOTING_STAR_DELAY 64.0

/* Galaxy */
//#define NL_GALAXY_STARS 2.0
#define NL_GALAXY_VIBRANCE 0.7
#define NL_GALAXY_SPEED 0.03
#define NL_GALAXY_DAY_VISIBILITY 0.0

/* Chunk loading */
//#define NL_CHUNK_LOAD_ANIM 100.0

/* Sun/Moon */
#define NL_SUN_SIZE  1.2                   // slightly bigger sun
#define NL_MOON_SIZE 1.1
#define NL_SUN_PATH_YAW    15.0
#define NL_MOON_PATH_YAW   17.0
#define NL_SUN_PATH_TILT   31.0
#define NL_MOON_PATH_TILT -28.0
#define NL_SUN_TILT        45.0
#define NL_MOON_TILT       45.0

/* Godrays - ON! */
#define NL_GODRAY 0.4                      // visible godrays at sunrise/sunset

/* Sky/Ground reflection */
#define NL_GROUND_REFL 0.35               // wet ground reflects sky
#define NL_GROUND_RAIN_WETNESS 1.0
#define NL_GROUND_RAIN_PUDDLES 0.85       // more puddles in rain

/* Entity */
#define NL_ENTITY_BRIGHTNESS     0.70
#define NL_ENTITY_EDGE_HIGHLIGHT 0.45

/* Weather */
#define NL_WEATHER_SPECK 0.7
#define NL_WEATHER_RAIN_SLANT 4.5
#define NL_WEATHER_PARTICLE_SIZE 1.0

/* Lava */
#define NL_LAVA_NOISE
#define NL_LAVA_NOISE_SPEED 0.2

/* ---- SUBPACK CONFIG ---- */
#ifdef LITE
  #define NO_WAVE
  #undef NL_GLOW_SHIMMER
  #undef NL_LAVA_NOISE
  #undef NL_WEATHER_SPECK
  #undef NL_SHOOTING_STAR
  #undef NL_CLOUD_AURORA_REFLECTION
  #undef NL_UNDERWATER_STREAKS
  #undef NL_RAIN_MIST_OPACITY
  #undef NL_CLOUDY_FOG
  #undef NL_ENTITY_EDGE_HIGHLIGHT
#endif

#ifdef NO_WAVE_NO_FOG
  #define NO_WAVE
  #define NO_FOG
#endif

#ifdef NO_FOG
  #undef NL_FOG
#endif

#ifdef NO_WAVE
  #undef NL_PLANTS_WAVE
  #undef NL_LANTERN_WAVE
  #undef NL_UNDERWATER_WAVE
  #undef NL_WATER_WAVE
  #undef NL_RAIN_MIST_OPACITY
#endif

#ifdef CHUNK_ANIM
  #define NL_CHUNK_LOAD_ANIM 100.0
#endif

#ifdef ROUNDED_CLOUDS
  #undef NL_CLOUD_TYPE
  #define NL_CLOUD_TYPE 2
  #undef NL_CLOUD_SHADOW
#endif

#ifdef BOX_CLOUDS
  #undef NL_CLOUD_TYPE
  #define NL_CLOUD_TYPE 0
  #undef NL_CLOUD_SHADOW
#endif

#ifdef REALISTIC_CLOUDS
  #undef NL_CLOUD_TYPE
  #define NL_CLOUD_TYPE 3
  #undef NL_CLOUD_SHADOW
#endif

#endif
