/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:58 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@interface ICEResultQuery : NSObject {

	unsigned callID;
	tagCONNRESULT* result;
	BOOL isQueryAnswered;

}

@property (assign) tagCONNRESULT* result; 
@property (assign) unsigned callID; 
@property (assign) BOOL isQueryAnswered; 
-(void)dealloc;
-(tagCONNRESULT*)result;
-(void)setResult:(tagCONNRESULT*)arg1 ;
-(id)initWithResult:(tagCONNRESULT*)arg1 ;
-(void)setCallID:(unsigned)arg1 ;
-(unsigned)callID;
-(id)initWithCallID:(unsigned)arg1 ;
-(BOOL)isQueryAnswered;
-(void)setIsQueryAnswered:(BOOL)arg1 ;
@end

