def cloneGraph(node)
    return nil if node.nil?
    clones = {}
    dfs = lambda do |current|
        return clones[current] if clones.key?(current)
        copy = Node.new(current.val)
        clones[current] = copy
        current.neighbors.each do |neighbor|
            copy.neighbors << dfs.call(neighbor)
        end
        copy
    end
    dfs.call(node)
end
