//  Generated by desperion protocol_builder

#ifndef core_game_fight_option_state_update_message_hpp
#define core_game_fight_option_state_update_message_hpp

namespace protocol
{
    struct game_fight_option_state_update_message : dofus_unit
    {
        int16_t fight_id;
        int8_t team_id;
        int8_t option;
        bool state;
        
        int16_t id() const override
        { return 5927; } 
        
        game_fight_option_state_update_message(const int16_t & fight_id, const int8_t & team_id, const int8_t & option, const bool & state)
        {
            _data << fight_id;
            _data << team_id;
            _data << option;
            _data << state;
        }
        
        game_fight_option_state_update_message(byte_buffer & data)
        {
            data >> fight_id;
            data >> team_id;
            data >> option;
            data >> state;
        }
    };
}

#endif
