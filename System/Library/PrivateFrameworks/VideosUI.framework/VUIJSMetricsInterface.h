/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VUIJSMetricsInterface.h>

@protocol VUIJSMetricsInterface <JSExport>
@required
-(void)recordEvent:(id)arg1;
-(void)recordPerfEvent:(id)arg1;
-(void)recordLogEvent:(id)arg1;

@end


@interface VUIJSMetricsInterface : IKJSObject <VUIJSMetricsInterface>
-(void)recordEvent:(id)arg1 ;
-(id)initWithAppContext:(id)arg1 ;
-(void)recordPerfEvent:(id)arg1 ;
-(void)recordLogEvent:(id)arg1 ;
@end
