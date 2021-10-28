/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString, NSDictionary, CIBarcodeDescriptor;

@interface AVMetadataMachineReadableCodeObjectInternal : NSObject {

	NSArray* corners;
	NSString* stringValue;
	NSDictionary* basicDescriptor;
	BOOL decoded;
	CIBarcodeDescriptor* descriptor;

}

@property (retain) NSArray * corners; 
@property (retain) NSString * stringValue; 
@property (retain) NSDictionary * basicDescriptor; 
@property (assign) BOOL decoded; 
@property (retain) CIBarcodeDescriptor * descriptor; 
-(void)dealloc;
-(NSString *)stringValue;
-(NSArray *)corners;
-(void)setStringValue:(NSString *)arg1 ;
-(CIBarcodeDescriptor *)descriptor;
-(void)setDescriptor:(CIBarcodeDescriptor *)arg1 ;
-(void)setCorners:(NSArray *)arg1 ;
-(NSDictionary *)basicDescriptor;
-(void)setBasicDescriptor:(NSDictionary *)arg1 ;
-(BOOL)decoded;
-(void)setDecoded:(BOOL)arg1 ;
@end
