//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSDate, NSString;

@interface SCGtqRequestContext : NSObject
{
    NSDate *_requestStartTime;
    NSString *_referenceId;
    CLLocation *_location;
}

@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSString *referenceId; // @synthesize referenceId=_referenceId;
@property(readonly, nonatomic) NSDate *requestStartTime; // @synthesize requestStartTime=_requestStartTime;
- (void).cxx_destruct;
- (id)initWithReferenceId:(id)arg1 requestStartTime:(id)arg2 location:(id)arg3;

@end

