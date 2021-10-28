/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface GEMagicResult : NSObject {

	NSString* mimeType;
	NSString* description;
	NSString* uniformType;
	NSArray* uniformTypeHierarchy;

}

@property (nonatomic,copy,readonly) NSString * mimeType; 
@property (nonatomic,copy,readonly) NSString * description; 
@property (nonatomic,copy,readonly) NSString * uniformType; 
@property (nonatomic,copy,readonly) NSArray * uniformTypeHierarchy; 
-(void)dealloc;
-(NSString *)description;
-(NSString *)mimeType;
-(NSString *)uniformType;
-(NSArray *)uniformTypeHierarchy;
-(id)initWithMimeType:(id)arg1 description:(id)arg2 typeHierarchy:(id)arg3 ;
@end
