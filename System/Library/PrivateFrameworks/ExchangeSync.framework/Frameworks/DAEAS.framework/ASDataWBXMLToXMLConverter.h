/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DAEAS/ASWBXMLToXMLConverter.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@class NSInputStream, NSMutableData, NSString;

@interface ASDataWBXMLToXMLConverter : ASWBXMLToXMLConverter <NSStreamDelegate> {

	NSInputStream* _input;
	NSMutableData* _output;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(BOOL)runSynchronously;
-(void)outputString:(id)arg1 ;
-(void)outputData:(id)arg1 ;
-(long long)readFromInput;
-(id)initWithWBXMLData:(id)arg1 forOutput:(id)arg2 usingMetadata:(BOOL)arg3 ;
@end

