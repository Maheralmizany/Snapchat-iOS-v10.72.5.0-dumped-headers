//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableString;

@interface SCMutableCircularString : NSObject
{
    NSMutableString *_string;
    long long _start;
    long long _length;
    long long _capacity;
}

@property(readonly, nonatomic) long long capacity; // @synthesize capacity=_capacity;
- (void).cxx_destruct;
- (long long)length;
- (id)string;
- (void)appendString:(id)arg1;
- (id)initWithCapacity:(long long)arg1;

@end

