/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:46 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, IKAppContext;


@protocol IKDOMFeature <NSObject>
@property (nonatomic,copy,readonly) NSString * featureName; 
@property (nonatomic,__weak,readonly) IKAppContext * appContext; 
@optional
-(void)migrateToViewElement:(id)arg1;

@required
+(id)makeFeatureJSObjectForFeature:(id)arg1;
-(NSString *)featureName;
-(IKAppContext *)appContext;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2;

@end

