/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoVision/PhotoVision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PVFace, PVImage;

@interface PVFaceCropSourceDescriptor : NSObject <NSCopying> {

	PVFace* _face;
	PVImage* _image;

}
+(id)descriptorForFace:(id)arg1 image:(id)arg2 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)face;
-(id)image;
-(id)initWithFace:(id)arg1 image:(id)arg2 ;
@end

