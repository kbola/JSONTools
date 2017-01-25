//
//  NSDictionary+JSONDeepMutable.h
//  JSONTools
//
//  Copyright (C) 2014 Gregory Combs [gcombs at gmail]
//  See LICENSE.txt for details.

#import <Foundation/Foundation.h>

@interface NSDictionary (JSONDeepMutable)

/**
 *  Recurses into the receiver's contents and makes a (mutable) copy of each value it encounters.
 *  Throws an exception if any interior value objects aren't copyable in some way. This method
 *  prefers NSMutableCopying over NSCopying whenever possible.
 *
 *  @return A deeply mutable copy of the receiver's contents.
 */
- (NSMutableDictionary *)copyAsDeeplyMutableJSON;

/**
 *  Recurses into the receiver's contents and makes a (mutable) copy of each value it encounters.
 *  Throws an exception if any interior value objects aren't copyable in some way. This method
 *  prefers NSMutableCopying over NSCopying whenever possible.
 *
 *  @param throwsExceptions Conditionally throw exceptions if an interior object isn't mutable or copyable,
 *                          otherwise it merely omits that object from the new collection.
 *
 *  @return A deeply mutable copy of the receiver's contents.
 */
- (NSMutableDictionary *)copyAsDeeplyMutableJSONWithExceptions:(BOOL)throwsExceptions;

/**
 *  Recurses into the receiver's contents and makes an immutable copy of each value it encounters.
 *  Throws an exception if any interior value objects aren't copyable in some way. This method
 *  ensures there are no mutable objects in the copy.
 *
 *  @param throwsExceptions Conditionally throw exceptions if an interior object isn't mutable or copyable,
 *                          otherwise it merely omits that object from the new collection.
 *
 *  @return A deeply immutable copy of the receiver's contents.
 */
- (NSDictionary *)copyAsDeeplyImmutableJSONWithExceptions:(BOOL)throwsExceptions;

@end
