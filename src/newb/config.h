#ifndef NL_CONFIG_H
#define NL_CONFIG_H

/*
  NEWB SHADER - BALANCED REALISTIC
  Fixed: less orange, natural colors, better shadows
*/

/* Color correction */
#define NL_TONEMAP_TYPE 3              // Extended Reinhard - more natural
#define NL_GAMMA 1.25                  // balanced
#define NL_EXPOSURE 1.05               // [toggle] very subtle brightness
#define NL_SATURATION 1.2              // [toggle] mild saturation boost
//#define NL_TINT                      // OFF - ye hi orange kar raha tha!
#define NL_TINT_LOW  vec3(0.3,0.5,1.4)
#define NL_TINT_HIGH vec3(1.4,0.7,0.3)

/* Lighting */
#define NL_SUNLIGHT_INTENSITY   3.8    // kam kiya - pehle bahut zyada tha
#define NL_TORCHLIGHT_INTENSITY 1.4
#define NL_SHADOW_INTENSITY     0.78   // softer shadows
#define NL_MIN_LIGHTING_BOOST   1.4
//#define NL_BLINKING_TORCH
#define NL_CLOUD_SHADOW

/* Ambient */
#define NL_NETHER_AMBIENT vec3(3.0,2.16,1.89)
#define NL_END_AMBIENT    vec3(1.98,1.25,2.3)

/* Sun/moon - natural colors */
#define NL_DAWN_SUNLIGHT_COL   vec3(1.0,0.45,0.15)
#define NL_NOON_SUNLIGHT_COL   vec3(1.0,0.92,0.78)  // cooler noon
#define NL_NIGHT_MOONLIGHT_COL vec3(0.01,0.03,0.2)

/* Torch */
#define NL_OVERWORLD_TORCH_COL  vec3(1.0,0.52,0.18)
#define NL_UNDERWATER_TORCH_COL vec3(1.0,0.52,0.18)
#define NL_NETHER_TORCH_COL     vec3(1.0,0.52,0.18)
#define NL_END_TORCH_COL        vec3(1.0,0.52,0.18)

/* Fog */
#define NL_FOG 1.0
#define NL_MIST_DENSITY 0.18
#define NL_RAIN_MIST_OPACITY 0.14
#define NL_CLOUDY_FOG 0.1

/* Sky */
#define NL_SKY_VOID_FACTOR     0.5
#define NL_SKY_VOID_DARKNESS   0.3
#define NL_SKY_RAIN_MIX_FACTOR 0.9

/* Sky colors - natural blue sky */
#define NL_DAWN_ZENITH_COL   vec3(0.1,0.38,0.72)
#define NL_DAWN_HORIZON_COL  vec3(2.8,0.42,0.25)
#define NL_DAWN_EDGE_COL     vec3(2.0,0.85,0.6)
#define NL_DAY_ZENITH_COL    vec3(0.22,0.78,1.95)   // natural blue
#define NL_DAY_HORIZON_COL   vec3(0.95,1.52,1.82)
#define NL_DAY_EDGE_COL      vec3(1.44,1.56,1.62)
#define NL_NIGHT_ZENITH_COL  vec3(0.008,0.048,0.08)
#define NL_NIGHT_HORIZON_COL vec3(0.02,0.06,0.1)
#define NL_NIGHT_EDGE_COL    vec3(0.04,0.08,0.1)
#define NL_RAIN_ZENITH_COL   vec3(0.47,0.51,0.56)
#define NL_RAIN_HORIZON_COL  vec3(0.6,0.6,0.6)
#define NL_END_ZENITH_COL    vec3(0.08,0.001,0.1)
#define NL_END_HORIZON_COL   vec3(0.6,0.02,0.6)

/* Rainbow */
#define NL_RAINBOW
#define NL_RAINBOW_CLEAR 0.0
#define NL_RAINBOW_RAIN  0.45

/* Ore glow */
#define NL_GLOW_TEX 2.5
#define NL_GLOW_SHIMMER 0.85
#define NL_GLOW_SHIMMER_SPEED 0.9
#define NL_GLOW_LEAK 0.5

/* Waving */
#define NL_PLANTS_WAVE 0.055
#define NL_LANTERN_WAVE 0.16
#define NL_WAVE_SPEED 2.8
#define NL_WAVE_RANGE 14.0

/* Water - good reflections */
#define NL_WATER_TRANSPARENCY 0.88
#define NL_WATER_BUMP 0.12
#define NL_WATER_WAVE_SPEED  0.85
#define NL_WATER_TEX_OPACITY 0.22
#define NL_WATER_WAVE
#define NL_WATER_REFL_MASK
#define NL_WATER_TINT vec3(0.42,0.82,0.92)  // natural blue-green water

/* Underwater */
#define NL_UNDERWATER_BRIGHTNESS 0.85
#define NL_CAUSTIC_INTENSITY 2.1
#define NL_UNDERWATER_WAVE 0.11
#define NL_UNDERWATER_STREAKS 1.1
#define NL_UNDERWATER_TINT vec3(0.8,0.95,1.0)

/* Cloud type - soft (realistic A51 pe lag karta) */
#define NL_CLOUD_TYPE 1            // 1=soft, better for A51

/* Soft cloud */
#define NL_CLOUD1_SCALE vec2(0.016, 0.022)
#define NL_CLOUD1_DEPTH 1.4
#define NL_CLOUD1_SPEED 0.04
#define NL_CLOUD1_DENSITY 0.55
#define NL_CLOUD1_OPACITY 0.92

/* Vanilla cloud */
#define NL_CLOUD0_THICKNESS 2.1
#define NL_CLOUD0_RAIN_THICKNESS 4.0
#define NL_CLOUD0_OPACITY 0.9
#define NL_CLOUD0_MULTILAYER

/* Rounded cloud */
#define NL_CLOUD2_THICKNESS 2.1
#define NL_CLOUD2_RAIN_THICKNESS 2.5
#define NL_CLOUD2_STEPS 5
#define NL_CLOUD2_SCALE vec2(0.033, 0.033)
#define NL_CLOUD2_SHAPE vec2(0.5, 0.4)
#define NL_CLOUD2_DENSITY 25.0
#define NL_CLOUD2_VELOCITY 0.8
#define NL_CLOUD2_LAYER2_OFFSET 143.0
#define NL_CLOUD2_LAYER2_THICKNESS 2.5
#define NL_CLOUD2_LAYER2_RAIN_THICKNESS 3.0
#define NL_CLOUD2_LAYER2_STEPS 3
#define NL_CLOUD2_LAYER2_SCALE vec2(0.03, 0.03)
#define NL_CLOUD2_LAYER2_SHAPE vec2(0.5, 0.4)
#define NL_CLOUD2_LAYER2_DENSITY 25.0
#define NL_CLOUD2_LAYER2_VELOCITY 0.8

/* Realistic cloud */
#define NL_CLOUD3_SCALE vec2(0.03, 0.03)
#define NL_CLOUD3_SPEED 0.005
#define NL_CLOUD3_SHADOW 0.9
#define NL_CLOUD3_SHADOW_OFFSET 0.3

/* Aurora */
#define NL_AURORA 1.3
#define NL_AURORA_VELOCITY 0.03
#define NL_AURORA_SCALE 0.04
#define NL_AURORA_WIDTH 0.18
#define NL_AURORA_COL1 vec3(0.1,1.0,0.0)
#define NL_AURORA_COL2 vec3(0.1,0.0,1.0)
#define NL_CLOUD_AURORA_REFLECTION

/* Shooting star */
#define NL_SHOOTING_STAR 1.0
#define NL_SHOOTING_STAR_PERIOD 6.0
#define NL_SHOOTING_STAR_DELAY 64.0

/* Galaxy */
//#define NL_GALAXY_STARS 2.0
#define NL_GALAXY_VIBRANCE 0.7
#define NL_GALAXY_SPEED 0.03
#define NL_GALAXY_DAY_VISIBILITY 0.0

/* Sun/Moon */
#define NL_SUN_SIZE  1.1
#define NL_MOON_SIZE 1.0
#define NL_SUN_PATH_YAW    15.0
#define NL_MOON_PATH_YAW   17.0
#define NL_SUN_PATH_TILT   31.0
#define NL_MOON_PATH_TILT -28.0
#define NL_SUN_TILT        45.0
#define NL_MOON_TILT       45.0

/* Godrays - subtle */
#define NL_GODRAY 0.25

/* Ground reflection - rain only */
//#define NL_GROUND_REFL 0.35
#define NL_GROUND_RAIN_WETNESS 1.0
#define NL_GROUND_RAIN_PUDDLES 0.75

/* Entity */
#define NL_ENTITY_BRIGHTNESS     0.68
#define NL_ENTITY_EDGE_HIGHLIGHT 0.42

/* Weather */
#define NL_WEATHER_SPECK 0.65
#define NL_WEATHER_RAIN_SLANT 4.0
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
