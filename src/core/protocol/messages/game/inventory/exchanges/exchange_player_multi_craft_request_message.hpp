//  Generated by desperion protocol_builder

#ifndef core_exchange_player_multi_craft_request_message_hpp
#define core_exchange_player_multi_craft_request_message_hpp

namespace protocol
{
    struct exchange_player_multi_craft_request_message : exchange_request_message
    {
        int32_t target;
        int32_t skill_id;
        
        int16_t id() const override
        { return 5784; } 
        
        exchange_player_multi_craft_request_message(const int8_t & exchange_type, const int32_t & target, const int32_t & skill_id) : exchange_request_message { exchange_type }
        {
            _data << target;
            _data << skill_id;
        }
        
        exchange_player_multi_craft_request_message(byte_buffer & data) : exchange_request_message { data }
        {
            data >> target;
            data >> skill_id;
        }
    };
}

#endif
