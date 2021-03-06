/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INImage;


@protocol INKeyImageProducing <NSObject>
@property (readonly) INImage * _keyImage; 
@optional
-(BOOL)_isValidSubProducer:(id)arg1;

@required
-(INImage *)_keyImage;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;

@end

