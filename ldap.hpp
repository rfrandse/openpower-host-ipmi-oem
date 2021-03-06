#pragma once
#include <host-ipmid/ipmid-api.h>

namespace ldap
{
    /**
     * Deletes the LDAP configuration object and any LDAP
     * user objects.
     *
     * @return ipmi_ret_t - IPMI_CC_SUCCESS if successful
     */
    ipmi_ret_t deleteConfig();
}
