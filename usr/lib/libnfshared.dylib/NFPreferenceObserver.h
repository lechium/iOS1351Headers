/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libnfshared.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface NFPreferenceObserver : NSObject {

	/*^block*/id _callback;

}

@property (copy) id callback;              //@synthesize callback=_callback - In the implementation block
-(void)dealloc;
-(void)stop;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)start:(/*^block*/id)arg1 ;
-(void)handlePreferencesOrProfileChanged;
@end
