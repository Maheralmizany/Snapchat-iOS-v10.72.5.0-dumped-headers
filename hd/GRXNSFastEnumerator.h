//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@interface GRXNSFastEnumerator : NSEnumerator
{
    id <NSFastEnumeration> _container;
    CDStruct_58648341 _state;
    unsigned long long _count;
    unsigned long long _index;
    id _bufferValue;
    unsigned long long _mutationFlag;
    _Bool _mutationFlagIsSet;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithContainer:(id)arg1;
- (id)init;

@end
