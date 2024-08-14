#pragma once
#include "pmlxzj.h"

static inline const char* pmlxzj_get_audio_codec_name(pmlxzj_audio_codec_e audio_codec) {
  switch (audio_codec) {
    case PMLXZJ_AUDIO_TYPE_WAVE_RAW:
      return "PMLXZJ_AUDIO_TYPE_WAVE_RAW";
    case PMLXZJ_AUDIO_TYPE_WAVE_COMPRESSED:
      return "PMLXZJ_AUDIO_TYPE_WAVE_COMPRESSED";
    case PMLXZJ_AUDIO_TYPE_LOSSY_MP3:
      return "PMLXZJ_AUDIO_TYPE_LOSSY_MP3";
    case PMLXZJ_AUDIO_TYPE_LOSSY_TRUE_SPEECH:
      return "PMLXZJ_AUDIO_TYPE_LOSSY_TRUE_SPEECH";
    case PMLXZJ_AUDIO_TYPE_LOSSY_AAC:
      return "PMLXZJ_AUDIO_TYPE_LOSSY_AAC";
    default:
      return "UNKNOWN";
  }
}

static inline const char* pmlxzj_get_state_name(pmlxzj_state_e state) {
  switch (state) {
    case PMLXZJ_OK:
      return "PMLXZJ_OK";
    case PMLXZJ_MAGIC_NOT_MATCH:
      return "PMLXZJ_MAGIC_NOT_MATCH";
    case PMLXZJ_UNSUPPORTED_MODE_2:
      return "PMLXZJ_UNSUPPORTED_MODE_2";
    case PMLXZJ_ALLOCATE_INDEX_LIST_ERROR:
      return "PMLXZJ_ALLOCATE_INDEX_LIST_ERROR";
    case PMLXZJ_SCAN_U32_ARRAY_ALLOC_ERROR:
      return "PMLXZJ_SCAN_U32_ARRAY_ALLOC_ERROR";
    case PMLXZJ_AUDIO_OFFSET_UNSUPPORTED:
      return "PMLXZJ_AUDIO_OFFSET_UNSUPPORTED";
    case PMLXZJ_AUDIO_TYPE_UNSUPPORTED:
      return "PMLXZJ_AUDIO_TYPE_UNSUPPORTED";
    case PMLXZJ_PASSWORD_ERROR:
      return "PMLXZJ_PASSWORD_ERROR";
    case PMLXZJ_AUDIO_INCORRECT_TYPE:
      return "PMLXZJ_AUDIO_INCORRECT_TYPE";
    case PMLXZJ_AUDIO_NOT_PRESENT:
      return "PMLXZJ_AUDIO_NOT_PRESENT";
    case PMLXZJ_GZIP_BUFFER_ALLOC_FAILURE:
      return "PMLXZJ_GZIP_BUFFER_ALLOC_FAILURE";
    case PMLXZJ_GZIP_BUFFER_TOO_LARGE:
      return "PMLXZJ_GZIP_BUFFER_TOO_LARGE";
    case PMLXZJ_GZIP_INFLATE_FAILURE:
      return "PMLXZJ_GZIP_INFLATE_FAILURE";
    case PMLXZJ_NO_AUDIO:
      return "PMLXZJ_NO_AUDIO";
    default:
      return "UNKNOWN";
  }
}
