//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMPSequenceIdProviderInterface.h"

@interface AMPSequenceIdProvider : NSObject <AMPSequenceIdProviderInterface>
{
    long long _currentSequenceId;
}

@property(nonatomic) long long currentSequenceId; // @synthesize currentSequenceId=_currentSequenceId;
- (id)description;
- (_Bool)isEqualToSequenceIdProvider:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)incrementSequenceId;
- (id)initWithSequenceId:(long long)arg1;

@end

