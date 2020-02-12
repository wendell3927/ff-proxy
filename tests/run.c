#include "include/unity.h"
#include "test_hello_world.c"
#include "test_parser.c"
#include "test_logging.c"

void setUp(void)
{
}

void tearDown(void)
{
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_hello_world);
    RUN_TEST(test_request_option_node_alloc);
    RUN_TEST(test_request_option_node_free);
    RUN_TEST(test_request_payload_node_alloc);
    RUN_TEST(test_request_payload_node_free);
    RUN_TEST(test_request_alloc);
    RUN_TEST(test_request_free);
    RUN_TEST(test_request_parse_raw_http_get);
    RUN_TEST(test_request_parse_raw_http_post);
    RUN_TEST(test_request_parse_v1_single_chunk);
    RUN_TEST(test_request_parse_v1_multiple_chunks);
    RUN_TEST(test_request_parse_v1_single_chunk_with_options);
    RUN_TEST(test_log_debug);
    return UNITY_END();
}