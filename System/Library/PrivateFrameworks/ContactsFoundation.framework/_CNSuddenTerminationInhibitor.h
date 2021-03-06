/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsFoundation/CNInhibitor.h>

@class NSProcessInfo;

@interface _CNSuddenTerminationInhibitor : CNInhibitor {

	NSProcessInfo* _processInfo;

}

@property (nonatomic,retain) NSProcessInfo * processInfo;              //@synthesize processInfo=_processInfo - In the implementation block
-(id)init;
-(void)stop;
-(NSProcessInfo *)processInfo;
-(void)start;
-(id)initWithProcessInfo:(id)arg1 ;
-(void)setProcessInfo:(NSProcessInfo *)arg1 ;
@end

