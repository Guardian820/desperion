//  Generated by desperion protocol_builder

#ifndef core_exchange_object_move_priced_message_hpp
#define core_exchange_object_move_priced_message_hpp

namespace protocol
{
    struct exchange_object_move_priced_message : exchange_object_move_message
    {
        int32_t price;
        
        int16_t id() const override
        { return 5514; } 
        
        exchange_object_move_priced_message(const int32_t & object_u_i_d, const int32_t & quantity, const int32_t & price) : exchange_object_move_message { object_u_i_d,quantity }
        {
            _data << price;
        }
        
        exchange_object_move_priced_message(byte_buffer & data) : exchange_object_move_message { data }
        {
            data >> price;
        }
    };
}

#endif
