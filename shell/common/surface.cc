// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "flutter/shell/common/surface.h"

namespace flutter {

Surface::Surface() = default;

Surface::~Surface() = default;

flutter::ExternalViewEmbedder* Surface::GetExternalViewEmbedder() {
  return nullptr;
}

std::unique_ptr<GLContextResult> Surface::MakeRenderContextCurrent() {
  return std::make_unique<GLContextDefaultResult>(true);
}

}  // namespace flutter
