//
//  Misc.h
//  Collections
//
//  Created by Tony Xiao on 7/19/13.
//  Copyright (c) 2013 Collections Labs, Inc. All rights reserved.
//

#ifndef CLToolkit_Misc_h
#define CLToolkit_Misc_h

#import "Core.h"

#import "CLValueTransformers.h"

#if !TARGET_OS_IPHONE
#import "CLSharedFileList.h"
#import "NSImage+IconRef.h"
#import "NSImage+QuickLook.h"

void TransformToForegroundApplication(void);
void TransformToAccessoryApplication(void);
#endif

#endif