//  Generated by desperion protocol_builder

#ifndef core_guild_invitation_state_recruted_message_hpp
#define core_guild_invitation_state_recruted_message_hpp

namespace protocol
{
    struct guild_invitation_state_recruted_message : dofus_unit
    {
        int8_t invitation_state;
        
        int16_t id() const override
        { return 5548; } 
        
        guild_invitation_state_recruted_message(const int8_t & invitation_state)
        {
            _data << invitation_state;
        }
        
        guild_invitation_state_recruted_message(byte_buffer & data)
        {
            data >> invitation_state;
        }
    };
}

#endif
