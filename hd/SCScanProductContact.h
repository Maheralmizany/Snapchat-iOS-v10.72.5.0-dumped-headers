//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCScanProductContact : NSObject
{
    NSString *_contactEmail;
    NSString *_contactPhone;
}

@property(retain, nonatomic) NSString *contactPhone; // @synthesize contactPhone=_contactPhone;
@property(retain, nonatomic) NSString *contactEmail; // @synthesize contactEmail=_contactEmail;
- (void).cxx_destruct;
- (id)initWithEmail:(id)arg1 phone:(id)arg2;

@end
