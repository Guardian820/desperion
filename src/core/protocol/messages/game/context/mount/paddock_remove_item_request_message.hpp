//  Generated by desperion protocol_builder

#ifndef core_paddock_remove_item_request_message_hpp
#define core_paddock_remove_item_request_message_hpp

namespace protocol
{
    struct paddock_remove_item_request_message : dofus_unit
    {
        int16_t cell_id;
        
        int16_t id() const override
        { return 5958; } 
        
        paddock_remove_item_request_message(const int16_t & cell_id)
        {
            _data << cell_id;
        }
        
        paddock_remove_item_request_message(byte_buffer & data)
        {
            data >> cell_id;
        }
    };
}

#endif
