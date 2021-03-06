/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>
#import <libobjc.A.dylib/SRSampleDirectExporting.h>

@interface CMAmbientPressureData : CMLogItem <SRSampleDirectExporting> {

	id _internal;

}

@property (nonatomic,readonly) SCD_Struct_CM17 ambientPressure; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPressure:(SCD_Struct_CM16)arg1 andTimestamp:(double)arg2 ;
-(SCD_Struct_CM17)ambientPressure;
-(long long)sr_writeUTF8RepresentationToOutputStream:(id)arg1 ;
-(BOOL)sr_prefersUTF8StringRepresentation;
@end

