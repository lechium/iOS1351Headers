/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAVFill : NSObject
+(void)readGradientFill:(id)arg1 fromManager:(id)arg2 ;
+(id)readBlipRefFromManager:(id)arg1 state:(id)arg2 ;
+(id)targetBgColorWithManager:(id)arg1 ;
+(void)addStopsFromArray:(const OAVGradientStop*)arg1 stopCount:(int)arg2 inverted:(BOOL)arg3 startPos:(float)arg4 endPos:(float)arg5 toGradientFill:(id)arg6 manager:(id)arg7 ;
+(void)readImageFill:(id)arg1 fromManager:(id)arg2 state:(id)arg3 ;
+(id)readFromManager:(id)arg1 state:(id)arg2 ;
+(id)targetFgColorWithManager:(id)arg1 ;
@end

