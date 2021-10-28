/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricsKit/MTObject.h>

@protocol MTEventDataProviderDelegate;
@class NSDictionary;

@interface MTEventDataProvider : MTObject {

	id<MTEventDataProviderDelegate> _delegate;
	NSDictionary* _knownFieldMethods;

}

@property (nonatomic,retain) NSDictionary * knownFieldMethods;                             //@synthesize knownFieldMethods=_knownFieldMethods - In the implementation block
@property (assign,nonatomic,__weak) id<MTEventDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<MTEventDataProviderDelegate>)delegate;
-(void)setDelegate:(id<MTEventDataProviderDelegate>)arg1 ;
-(id)knownFields;
-(id)processMetricsData:(id)arg1 performanceData:(id)arg2 ;
-(id)knownFieldMethodsForKnownFields:(id)arg1 ;
-(SEL)knownFieldAccessorForFieldName:(id)arg1 ;
-(NSDictionary *)knownFieldMethods;
-(void)setKnownFieldMethods:(NSDictionary *)arg1 ;
@end
