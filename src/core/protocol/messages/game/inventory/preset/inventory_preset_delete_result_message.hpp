//  Generated by desperion protocol_builder

#ifndef core_inventory_preset_delete_result_message_hpp
#define core_inventory_preset_delete_result_message_hpp

namespace protocol
{
    struct inventory_preset_delete_result_message : dofus_unit
    {
        int8_t preset_id;
        int8_t code;
        
        int16_t id() const override
        { return 6173; } 
        
        inventory_preset_delete_result_message(const int8_t & preset_id, const int8_t & code)
        {
            _data << preset_id;
            _data << code;
        }
        
        inventory_preset_delete_result_message(byte_buffer & data)
        {
            data >> preset_id;
            data >> code;
        }
    };
}

#endif
