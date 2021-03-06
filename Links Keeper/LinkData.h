//
//  LinkData.h
//  Links Keeper
//
//  Created by Bruno Philipe on 3/29/13.
//	Copyright (C) 2013 Bruno Philipe
//
//	This program is free software: you can redistribute it and/or modify
//	it under the terms of the GNU General Public License as published by
//	the Free Software Foundation, either version 3 of the License, or
//	(at your option) any later version.
//
//	This program is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//	GNU General Public License for more details.
//
//	You should have received a copy of the GNU General Public License
//	along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import <Foundation/Foundation.h>

@interface LinkData : NSObject <NSCoding>

@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSURL *url;

/**
 Allocates and instantiates an object of LinkData class and sets its name and URL to the parameters values.
 @param name The Link display-name.
 @param url The URL for the link.
 */
+ (LinkData *)linkDataWithName:(NSString *)name andURL:(NSURL *)url;

@end
