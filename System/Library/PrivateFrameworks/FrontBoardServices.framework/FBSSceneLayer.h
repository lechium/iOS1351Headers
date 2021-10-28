/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSXPCCoding.h>

@class CAContext, NSString;

@interface FBSSceneLayer : NSObject <BSXPCCoding> {

	CAContext* _context;
	double _level;

}

@property (getter=_context,nonatomic,readonly) CAContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) long long alignment; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)_context;
-(long long)alignment;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)_unsafe_captureLevel;
-(double)_unsafe_level;
-(id)_initWithCAContext:(id)arg1 fallbackLevel:(double)arg2 ;
-(id)_succinctDescription;
-(BOOL)isCAContextLayer;
-(BOOL)isExternalSceneLayer;
@end
