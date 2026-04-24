// Wrangler for Vulkan functions.
// TODO: Eventually, we shall declare vulkan with NO_PROTOTYPES and wrap everything here for android multi-driver support.
// For now, we just use it for extensions since we're on VK_1_0

#define VK_DECL_EXTERN(func) extern PFN_##func _##func
#define VK_DECL_LOCAL(func) PFN_##func _##func

#if defined(DECLARE_VK_FUNCTION_HEADER)
#define VK_FUNC VK_DECL_EXTERN
#elif defined(DECLARE_VK_FUNCTION_BODY)
#define VK_FUNC VK_DECL_LOCAL
#elif !defined(VK_FUNC)
#error "VK_FUNC is not defined"
#endif

// EXT_conditional_rendering
VK_FUNC(_vkCmdBeginConditionalRenderingEXT);
VK_FUNC(_vkCmdEndConditionalRenderingEXT);

// EXT_debug_utils
VK_FUNC(_vkSetDebugUtilsObjectNameEXT);
VK_FUNC(_vkQueueInsertDebugUtilsLabelEXT);
VK_FUNC(_vkCmdInsertDebugUtilsLabelEXT);

// KHR_synchronization2
VK_FUNC(_vkCmdSetEvent2KHR);
VK_FUNC(_vkCmdWaitEvents2KHR);
VK_FUNC(_vkCmdPipelineBarrier2KHR);

// EXT_device_fault
VK_FUNC(_vkGetDeviceFaultInfoEXT);

// EXT_multi_draw
VK_FUNC(_vkCmdDrawMultiEXT);
VK_FUNC(_vkCmdDrawMultiIndexedEXT);

// EXT_external_memory_host
VK_FUNC(_vkGetMemoryHostPointerPropertiesEXT);

#undef VK_FUNC
#undef DECLARE_VK_FUNCTION_HEADER
#undef DECLARE_VK_FUNCTION_BODY
#undef VK_DECL_EXTERN
#undef VK_DECL_LOCAL
