/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libnetwork.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_content_context.h>

@protocol OS_nw_array, OS_nw_error;
@class NSObject, NSString;

@interface NWConcrete_nw_content_context : NSObject <OS_nw_content_context> {

	unsigned char packet_id[16];
	char identifier[32];
	NWConcrete_nw_content_context* antecedent;
	unsigned long long expiration_milliseconds;
	unsigned long long enqueue_time;
	double relative_priority;
	NSObject*<OS_nw_array> protocol_metadatas;
	NSObject*<OS_nw_error> error;
	os_unfair_lock_s lock;
	unsigned is_final : 1;
	unsigned expiration_checked : 1;
	unsigned completed_send : 1;
	unsigned has_packet_id : 1;
	unsigned __pad_bits : 4;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)redactedDescription;
-(id)initWithIdentifier:(const char*)arg1 ;
@end
