// @generated SignedSource<<fbd013060a25bb99a055606ce911f4d1>>

#pragma once

namespace facebook {
namespace profilo {
namespace entries {
enum EntryType {
  UNKNOWN_TYPE = 0,
  UI_INPUT_START = 1,
  UI_INPUT_END = 2,
  UI_UPDATE_START = 3,
  UI_UPDATE_END = 4,
  NET_ADDED = 5,
  NET_CANCEL = 6,
  NET_CHANGEPRI = 7,
  NET_ERROR = 8,
  NET_END = 9,
  NET_RESPONSE = 10,
  NET_RETRY = 11,
  NET_START = 12,
  NET_COUNTER = 13,
  CALL_START = 14,
  CALL_END = 15,
  ASYNC_CALL = 16,
  SERV_CONN = 17,
  SERV_DISCONN = 18,
  SERV_END = 19,
  ADAPTER_NOTIFY = 20,
  MARK_FLAG = 21,
  MARK_PUSH = 22,
  MARK_POP = 23,
  LIFECYCLE_APPLICATION_START = 24,
  LIFECYCLE_APPLICATION_END = 25,
  LIFECYCLE_ACTIVITY_START = 26,
  LIFECYCLE_ACTIVITY_END = 27,
  LIFECYCLE_SERVICE_START = 28,
  LIFECYCLE_SERVICE_END = 29,
  LIFECYCLE_BROADCAST_RECEIVER_START = 30,
  LIFECYCLE_BROADCAST_RECEIVER_END = 31,
  LIFECYCLE_CONTENT_PROVIDER_START = 32,
  LIFECYCLE_CONTENT_PROVIDER_END = 33,
  LIFECYCLE_FRAGMENT_START = 34,
  LIFECYCLE_FRAGMENT_END = 35,
  LIFECYCLE_VIEW_START = 36,
  LIFECYCLE_VIEW_END = 37,
  TRACE_ABORT = 38,
  TRACE_END = 39,
  TRACE_START = 40,
  TRACE_BACKWARDS = 41,
  TRACE_TIMEOUT = 42,
  COUNTER = 43,
  STACK_FRAME = 44,
  QPL_START = 45,
  QPL_END = 46,
  QPL_CANCEL = 47,
  QPL_NOTE = 48,
  QPL_POINT = 49,
  QPL_EVENT = 50,
  TRACE_ANNOTATION = 51,
  WAIT_START = 52,
  WAIT_END = 53,
  WAIT_SIGNAL = 54,
  STRING_KEY = 55,
  STRING_VALUE = 56,
  QPL_TAG = 57,
  QPL_ANNOTATION = 58,
  TRACE_THREAD_NAME = 59,
  TRACE_PRE_END = 60,
  TRACE_THREAD_PRI = 61,
  MINOR_FAULT = 62,
  MAJOR_FAULT = 63,
  PERFEVENTS_LOST = 64,
  CLASS_LOAD = 65,
  JAVASCRIPT_STACK_FRAME = 66,
  MESSAGE_START = 67,
  MESSAGE_END = 68,
  CLASS_VALUE = 69,
  HTTP2_REQUEST_INITIATED = 70,
  HTTP2_FRAME_HEADER = 71,
  HTTP2_WINDOW_UPDATE = 72,
  HTTP2_PRIORITY = 73,
  HTTP2_EGRESS_FRAME_HEADER = 74,
  PROCESS_LIST = 75,
  IO_START = 76,
  IO_END = 77,
  CPU_COUNTER = 78,
  CLASS_LOAD_START = 79,
  CLASS_LOAD_END = 80,
  CLASS_LOAD_FAILED = 81,
  STRING_NAME = 82,
  JAVA_FRAME_NAME = 83,
  BINDER_START = 84,
  BINDER_END = 85,
  MEMORY_ALLOCATION = 86,
  STKERR_EMPTYSTACK = 87,
  STKERR_STACKOVERFLOW = 88,
  STKERR_NOSTACKFORTHREAD = 89,
  STKERR_SIGNALINTERRUPT = 90,
  STKERR_NESTEDUNWIND = 91,
  MAPPING = 92,
  LOGGER_PRIORITY = 93,
};


const char* to_string(EntryType type);
} // namespace entries
} // namespace profilo
} // namespace facebook
