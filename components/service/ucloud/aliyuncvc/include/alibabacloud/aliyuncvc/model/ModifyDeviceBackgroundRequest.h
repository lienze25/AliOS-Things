/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_ALIYUNCVC_MODEL_MODIFYDEVICEBACKGROUNDREQUEST_H_
#define ALIBABACLOUD_ALIYUNCVC_MODEL_MODIFYDEVICEBACKGROUNDREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/aliyuncvc/AliyuncvcExport.h>

namespace AlibabaCloud
{
	namespace Aliyuncvc
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIYUNCVC_EXPORT ModifyDeviceBackgroundRequest : public RpcServiceRequest
			{

			public:
				ModifyDeviceBackgroundRequest();
				~ModifyDeviceBackgroundRequest();

				std::string getSerialNumber()const;
				void setSerialNumber(const std::string& serialNumber);
				std::string getPicture()const;
				void setPicture(const std::string& picture);

            private:
				std::string serialNumber_;
				std::string picture_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIYUNCVC_MODEL_MODIFYDEVICEBACKGROUNDREQUEST_H_