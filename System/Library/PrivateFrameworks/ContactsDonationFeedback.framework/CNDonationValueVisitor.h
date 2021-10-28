/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsDonationFeedback.framework/ContactsDonationFeedback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNDonationValueVisitor <NSObject>
@required
-(void)visitDonationValue:(id)arg1 nameComponents:(id)arg2;
-(void)visitDonationValue:(id)arg1 emailAddress:(id)arg2 label:(id)arg3;
-(void)visitDonationValue:(id)arg1 phoneNumber:(id)arg2 label:(id)arg3;
-(void)visitDonationValue:(id)arg1 postalAddress:(id)arg2 style:(long long)arg3 label:(id)arg4;
-(void)visitDonationValue:(id)arg1 imageData:(id)arg2;

@end
