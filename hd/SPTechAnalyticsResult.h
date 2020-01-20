//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSNumber, NSString;

@interface SPTechAnalyticsResult : NSObject <NSCoding>
{
    unsigned long long _status;
    NSString *_errorDomain;
    NSNumber *_errorCode;
    NSString *_errorDescription;
    NSNumber *_elapsedTime;
}

@property(retain, nonatomic) NSNumber *elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(copy, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(retain, nonatomic) NSNumber *errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)statusTextDescriptions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryReprersentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithStatus:(unsigned long long)arg1;

@end
