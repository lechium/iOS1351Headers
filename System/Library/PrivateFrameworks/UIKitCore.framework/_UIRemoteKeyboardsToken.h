/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface _UIRemoteKeyboardsToken : NSObject {

	int _identifier;
	NSString* canvasIdentifier;

}

@property (nonatomic,copy) NSString * canvasIdentifier; 
+(id)uniqueToken;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)canvasIdentifier;
-(void)setCanvasIdentifier:(NSString *)arg1 ;
@end

