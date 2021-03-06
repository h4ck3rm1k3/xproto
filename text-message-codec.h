// Copyright (c) CangKui <cangyingzhijia@126.com>
// All rights reserved.
//
// This library is dual-licensed: you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation. For the terms of this
// license, see <http://www.gnu.org/licenses/>.
//
// You are free to use this library under the terms of the GNU General
// Public License, but WITHOUT ANY WARRANTY; without even the implied
// warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// See the GNU General Public License for more details.
//
// Alternatively, you can license this library under a commercial
// license, as set out in <http://cesanta.com/>.
//
// Author: CangKui
// Date: 2013-03-29
//
#ifndef XPROTO_TEXT_MESSAGE_CODEC_H_
#define XPROTO_TEXT_MESSAGE_CODEC_H_

#include "xproto/protobuf-message-codec.h"

namespace xproto {

class TextMessageCodec : public ProtobufMessageCodec {
 public:
  TextMessageCodec();

  virtual ~TextMessageCodec() {};

  virtual void SetDefaultSeperatorList();

  virtual void SetSeperatorList(const char* sep_list);

  virtual bool ToString(const google::protobuf::Message &msg, 
                        std::string &output);

  virtual bool FromString(const std::string &input, 
                          google::protobuf::Message &msg);

  virtual bool CompactAndCheckString(const std::string &text, 
                                     std::string &result);

  virtual bool PrettyString(const std::string &text, 
                            std::string &result);

  virtual void TemplateString(const google::protobuf::Message &msg,
                              std::string &result);

 protected:
  const char* sep_list_;
};

}  // namespace xproto



#endif  // XPROTO_TEXT_MESSAGE_CODEC_H_
