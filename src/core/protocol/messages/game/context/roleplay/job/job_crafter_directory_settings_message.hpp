//  Generated by desperion protocol_builder

#ifndef core_job_crafter_directory_settings_message_hpp
#define core_job_crafter_directory_settings_message_hpp

namespace protocol
{
    struct job_crafter_directory_settings_message : dofus_unit
    {
        std::vector<job_crafter_directory_settings_ptr> crafters_settings;
        
        int16_t id() const override
        { return 5652; } 
        
        job_crafter_directory_settings_message(const std::vector<job_crafter_directory_settings_ptr> & crafters_settings)
        {
            _data << static_cast<int16_t>(crafters_settings.size());
            for (auto && i : crafters_settings)
                _data << i->buffer();
        }
        
        job_crafter_directory_settings_message(byte_buffer & data)
        {
            int16_t crafters_settings_size;
            data >> crafters_settings_size;
            crafters_settings.resize(crafters_settings_size);
            for (int16_t i = 0; i < crafters_settings_size; ++i)
                crafters_settings[i] = std::make_unique<job_crafter_directory_settings>(data);
        }
    };
}

#endif
