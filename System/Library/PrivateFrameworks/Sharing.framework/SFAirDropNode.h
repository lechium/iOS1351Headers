/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:45 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Sharing/Sharing-Structs.h>
@class NSPersonNameComponents, NSDate, NSString, NSSet, NSUUID, CURangingMeasurement, NSNumber;

@interface SFAirDropNode : NSObject {

	SFOperationRef _sender;
	NSPersonNameComponents* _nameComponents;
	BOOL _disabled;
	BOOL _me;
	BOOL _unknown;
	BOOL _monogram;
	BOOL _classroom;
	BOOL _classroomGroup;
	BOOL _classroomCourse;
	BOOL _suggestion;
	BOOL _rapport;
	BOOL _ultraWideBindCapable;
	BOOL _supportsCredentials;
	BOOL _supportsFMF;
	BOOL _supportsPasses;
	BOOL _supportsMixedTypes;
	NSDate* _discoveryDate;
	id _node;
	NSString* _contactIdentifier;
	NSString* _realName;
	CGImageRef _displayIcon;
	NSString* _displayName;
	NSString* _secondaryName;
	NSString* _model;
	NSString* _transportBundleID;
	NSSet* _handles;
	NSUUID* _nodeIdentifier;
	CURangingMeasurement* _rangingMeasurement;
	NSNumber* _suggestionIndex;
	long long _selectionReason;

}

@property (readonly) NSDate * discoveryDate;                                         //@synthesize discoveryDate=_discoveryDate - In the implementation block
@property (retain) id node;                                                          //@synthesize node=_node - In the implementation block
@property (retain) NSString * contactIdentifier;                                     //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (retain) NSString * realName;                                              //@synthesize realName=_realName - In the implementation block
@property (retain) CGImageRef displayIcon;                                           //@synthesize displayIcon=_displayIcon - In the implementation block
@property (retain) NSString * displayName;                                           //@synthesize displayName=_displayName - In the implementation block
@property (retain) NSString * secondaryName;                                         //@synthesize secondaryName=_secondaryName - In the implementation block
@property (retain) NSString * model;                                                 //@synthesize model=_model - In the implementation block
@property (retain) NSString * transportBundleID;                                     //@synthesize transportBundleID=_transportBundleID - In the implementation block
@property (retain) NSSet * handles;                                                  //@synthesize handles=_handles - In the implementation block
@property (retain) NSUUID * nodeIdentifier;                                          //@synthesize nodeIdentifier=_nodeIdentifier - In the implementation block
@property (nonatomic,retain) CURangingMeasurement * rangingMeasurement;              //@synthesize rangingMeasurement=_rangingMeasurement - In the implementation block
@property (retain) NSNumber * suggestionIndex;                                       //@synthesize suggestionIndex=_suggestionIndex - In the implementation block
@property (getter=isDisabled) BOOL disabled;                                         //@synthesize disabled=_disabled - In the implementation block
@property (getter=isMe) BOOL me;                                                     //@synthesize me=_me - In the implementation block
@property (getter=isKnown,readonly) BOOL known; 
@property (getter=isUnknown) BOOL unknown;                                           //@synthesize unknown=_unknown - In the implementation block
@property (getter=isMonogram) BOOL monogram;                                         //@synthesize monogram=_monogram - In the implementation block
@property (getter=isClassroom) BOOL classroom;                                       //@synthesize classroom=_classroom - In the implementation block
@property (getter=isclassroomGroup) BOOL classroomGroup;                             //@synthesize classroomGroup=_classroomGroup - In the implementation block
@property (getter=isClassroomCourse) BOOL classroomCourse;                           //@synthesize classroomCourse=_classroomCourse - In the implementation block
@property (getter=isSuggestion) BOOL suggestion;                                     //@synthesize suggestion=_suggestion - In the implementation block
@property (getter=isRapport) BOOL rapport;                                           //@synthesize rapport=_rapport - In the implementation block
@property (getter=isUltraWideBindCapable) BOOL ultraWideBindCapable;                 //@synthesize ultraWideBindCapable=_ultraWideBindCapable - In the implementation block
@property (assign) long long selectionReason;                                        //@synthesize selectionReason=_selectionReason - In the implementation block
@property (readonly) BOOL supportsCredentials;                                       //@synthesize supportsCredentials=_supportsCredentials - In the implementation block
@property (readonly) BOOL supportsFMF;                                               //@synthesize supportsFMF=_supportsFMF - In the implementation block
@property (readonly) BOOL supportsPasses;                                            //@synthesize supportsPasses=_supportsPasses - In the implementation block
@property (readonly) BOOL supportsMixedTypes;                                        //@synthesize supportsMixedTypes=_supportsMixedTypes - In the implementation block
+(id)nodeWithSFNode:(SFNodeRef)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)displayName;
-(id)node;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(void)setMe:(BOOL)arg1 ;
-(NSString *)contactIdentifier;
-(NSSet *)handles;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setNode:(id)arg1 ;
-(BOOL)isDisabled;
-(void)setDisabled:(BOOL)arg1 ;
-(NSString *)secondaryName;
-(BOOL)isMe;
-(void)setUnknown:(BOOL)arg1 ;
-(void)setSecondaryName:(NSString *)arg1 ;
-(BOOL)isKnown;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(void)setNodeIdentifier:(NSUUID *)arg1 ;
-(void)updateWithSFNode:(SFNodeRef)arg1 ;
-(NSUUID *)nodeIdentifier;
-(BOOL)isSuggestion;
-(BOOL)isUnknown;
-(BOOL)isClassroom;
-(BOOL)isClassroomCourse;
-(NSDate *)discoveryDate;
-(NSString *)realName;
-(void)setDisplayIcon:(CGImageRef)arg1 ;
-(void)setRealName:(NSString *)arg1 ;
-(void)setTransportBundleID:(NSString *)arg1 ;
-(void)setHandles:(NSSet *)arg1 ;
-(CURangingMeasurement *)rangingMeasurement;
-(void)updateDisplayName;
-(void)setRangingMeasurement:(CURangingMeasurement *)arg1 ;
-(void)appendDiscoveryInfoToDisplayName:(id)arg1 ;
-(void)cancelSend;
-(id)displayNameForLocale:(id)arg1 ;
-(void)startSendForBundleID:(id)arg1 sessionID:(id)arg2 items:(id)arg3 description:(id)arg4 previewImage:(CGImageRef)arg5 ;
-(void)handleOperationCallback:(SFOperationRef)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(CGImageRef)displayIcon;
-(NSString *)transportBundleID;
-(NSNumber *)suggestionIndex;
-(void)setSuggestionIndex:(NSNumber *)arg1 ;
-(BOOL)isMonogram;
-(void)setMonogram:(BOOL)arg1 ;
-(void)setClassroom:(BOOL)arg1 ;
-(BOOL)isclassroomGroup;
-(void)setClassroomGroup:(BOOL)arg1 ;
-(void)setClassroomCourse:(BOOL)arg1 ;
-(void)setSuggestion:(BOOL)arg1 ;
-(BOOL)isRapport;
-(void)setRapport:(BOOL)arg1 ;
-(BOOL)isUltraWideBindCapable;
-(void)setUltraWideBindCapable:(BOOL)arg1 ;
-(long long)selectionReason;
-(void)setSelectionReason:(long long)arg1 ;
-(BOOL)supportsCredentials;
-(BOOL)supportsFMF;
-(BOOL)supportsPasses;
-(BOOL)supportsMixedTypes;
@end

