//  Generated by desperion protocol_builder

#ifndef core_npc_dialog_creation_message_hpp
#define core_npc_dialog_creation_message_hpp

namespace protocol
{
    struct npc_dialog_creation_message : dofus_unit
    {
        int32_t map_id;
        int32_t npc_id;
        
        int16_t id() const override
        { return 5618; } 
        
        npc_dialog_creation_message(const int32_t & map_id, const int32_t & npc_id)
        {
            _data << map_id;
            _data << npc_id;
        }
        
        npc_dialog_creation_message(byte_buffer & data)
        {
            data >> map_id;
            data >> npc_id;
        }
    };
}

#endif
