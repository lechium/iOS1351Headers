/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <Memories/VEiOSSharedObject.h>

@interface FaceRecognizer : VEiOSSharedObject {

	BOOL _highAccuracy;

}

@property (assign,nonatomic) BOOL highAccuracy;              //@synthesize highAccuracy=_highAccuracy - In the implementation block
+(id)sharedRecognizer;
-(id)facesInImage:(id)arg1 ;
-(CGRect)containingRectForFaces:(id)arg1 scaleEachFaceRectBy:(double)arg2 ;
-(CGRect)containingRect:(id)arg1 ;
-(BOOL)highAccuracy;
-(void)setHighAccuracy:(BOOL)arg1 ;
@end

