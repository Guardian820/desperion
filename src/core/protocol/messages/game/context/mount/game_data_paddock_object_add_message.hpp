//  Generated by desperion protocol_builder

#ifndef core_game_data_paddock_object_add_message_hpp
#define core_game_data_paddock_object_add_message_hpp

namespace protocol
{
    struct game_data_paddock_object_add_message : dofus_unit
    {
        paddock_item_ptr paddock_item_description;
        
        int16_t id() const override
        { return 5990; } 
        
        game_data_paddock_object_add_message(const paddock_item_ptr & paddock_item_description)
        {
            _data << paddock_item_description->buffer();
        }
        
        game_data_paddock_object_add_message(byte_buffer & data)
        {
            paddock_item_description = std::make_unique<paddock_item>(data);
        }
    };
}

#endif
