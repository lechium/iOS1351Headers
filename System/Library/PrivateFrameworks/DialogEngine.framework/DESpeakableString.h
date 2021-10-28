/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString;

@interface DESpeakableString : NSObject {

	SpeakableString* _This;

}

@property (assign) SpeakableString* This;              //@synthesize This=_This - In the implementation block
@property (retain) NSString * print; 
@property (retain) NSString * speak; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)print;
-(NSString *)speak;
-(void)setSpeak:(NSString *)arg1 ;
-(void)setPrint:(NSString *)arg1 ;
-(void)setThis:(SpeakableString*)arg1 ;
-(SpeakableString*)This;
-(id)initWithPrint:(id)arg1 speak:(id)arg2 ;
@end
