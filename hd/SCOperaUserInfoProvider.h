//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSString;

@interface SCOperaUserInfoProvider : NSObject
{
    NSString *_email;
    NSString *_phone;
    NSString *_name;
    NSString *_zipCode;
    CLLocation *_location;
}

@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, copy, nonatomic) NSString *zipCode; // @synthesize zipCode=_zipCode;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (void)setLocation:(id)arg1;
- (void)setZipCode:(id)arg1;
- (id)initWithDisplayName:(id)arg1 phone:(id)arg2 email:(id)arg3;

@end

