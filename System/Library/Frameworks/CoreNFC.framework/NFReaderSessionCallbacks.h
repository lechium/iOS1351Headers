/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NFReaderSessionCallbacks <NSObject,NFSessionCallbackInterface>
@optional
-(void)didDetectTags:(id)arg1;
-(void)didDetectNDEFMessages:(id)arg1 fromTags:(id)arg2 updateUICallback:(/*^block*/id)arg3;
-(void)didDetectExternalReaderWithNotification:(id)arg1;

@required
-(void)didTerminate:(id)arg1;

@end

